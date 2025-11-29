@class NSString;

@interface AWEWechatBindModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isBindWechat;
@property (copy, nonatomic) NSString *finalJumpURL;
@property (nonatomic) unsigned long long jumpType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
