@class NSNumber, NSString;

@interface AWEIMXBridgeUploadIMRedPacketMediaFileMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *uploadId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
