@class NSData, NSMutableData;

@interface AMapAuthData : NSObject {
    NSMutableData *_headerData;
    NSMutableData *_publicData;
    NSMutableData *_normalData;
    NSMutableData *_encryptedData;
    unsigned char _publicSectionNum;
    unsigned char _normalSectionNum;
    unsigned char _encryptedSectionNum;
}

@property (readonly, nonatomic) unsigned char version;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSData *publicData;
@property (readonly, nonatomic) NSData *normalData;
@property (readonly, nonatomic) NSData *encryptedData;
@property (copy, nonatomic) NSData *reserveData;

- (void)appendPublicData:(id)a0;
- (void)appendNormalData:(id)a0;
- (id)encryptWithRowData:(id)a0;
- (void)appendEncryptedData:(id)a0;
- (void)appendPublicDataArray:(id)a0;
- (void)appendNormalDataArray:(id)a0;
- (void)appendEncryptedDataArray:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithVersion:(unsigned char)a0;

@end
