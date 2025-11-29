@class NSString;

@interface AWEIMBridgeLeagueFileModel : BDXBridgeModel

@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *fileType;
@property (copy, nonatomic) NSString *fileSize;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *msgId;
@property (copy, nonatomic) NSString *iconUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
