@class NSString;

@interface ReportSDKItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int itemType;
@property (retain, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSString *currPageJson;
@property (retain, nonatomic) NSString *sourcePageJson;
@property (retain, nonatomic) NSString *refPageJson;
@property (retain, nonatomic) NSString *sdkSessionId;

+ (void)initialize;

- (void)setSdkSessionId:(id)a0;
- (id)sdkSessionId;
- (void)setRefPageJson:(id)a0;
- (id)refPageJson;
- (void)setSourcePageJson:(id)a0;
- (id)sourcePageJson;
- (void)setCurrPageJson:(id)a0;
- (id)currPageJson;
- (void)setItemId:(id)a0;
- (id)itemId;
- (void)setItemType:(unsigned int)a0;
- (unsigned int)itemType;

@end
