@class NSString, NSMutableDictionary;

@interface WXVideoMetadata : NSObject

@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (copy, nonatomic) NSString *abaInfo;
@property (nonatomic) BOOL isSoftEncodeMetaData;
@property (nonatomic) BOOL isHardEncodeMetaData;
@property (retain, nonatomic) NSString *aigcTagContent;

+ (id)metadataWithWXTag;
+ (id)metadataFromAsset:(id)a0;
+ (id)getExtraInfoFromAsset:(id)a0;
+ (id)metadataFromAssetABA:(id)a0;
+ (id)generateABAMetadataValueWithAdaptiveBitrateUp:(long long)a0 adaptiveBitrateDown:(long long)a1 isCompressed:(BOOL)a2 isSoftEncoder:(BOOL)a3 isFromMaas:(BOOL)a4;
+ (BOOL)isAIGCMetadataItem:(id)a0;

- (BOOL)addExtraInfo:(id)a0 forKey:(id)a1;
- (BOOL)addExtraInfos:(id)a0;
- (id)extraInfoForKey:(id)a0;
- (BOOL)getWXCompressFlag;
- (int)containsExtraInfo;
- (unsigned int)getCreatedWXVersion;
- (id)generateMetadataFromExtraInfo;
- (BOOL)addToWriter:(id)a0;
- (BOOL)addToExportSession:(id)a0;
- (BOOL)addToWriterABA:(id)a0 ABA:(int)a1 ABA:(int)a2;
- (BOOL)containsABAFlag:(id)a0 assetURL:(id)a1;
- (BOOL)isContainsABAFlagWithAVFoundation:(id)a0;
- (BOOL)isContainsABAFlagWithFFmpeg:(id)a0;
- (void)checkSoftEncodeMetadata:(id)a0;
- (id)stringFromByte:(unsigned char)a0;
- (BOOL)containskSoftEncodeMetadata:(id)a0;
- (BOOL)containskHardEncodeMetadata:(id)a0;
- (id)getWXMetadata:(int)a0 ABAFlagDown:(int)a1;
- (void).cxx_destruct;

@end
