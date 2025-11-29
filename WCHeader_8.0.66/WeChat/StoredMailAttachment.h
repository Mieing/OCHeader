@class NSString, NSData;

@interface StoredMailAttachment : NSObject <NSCoding>

@property (retain, nonatomic) NSString *objectId;
@property (retain, nonatomic) NSString *objectName;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *attachID;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned int dataSize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
