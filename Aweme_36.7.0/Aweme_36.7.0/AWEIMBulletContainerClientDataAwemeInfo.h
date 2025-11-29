@class NSString, AWEURLModel;

@interface AWEIMBulletContainerClientDataAwemeInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *authorNickname;
@property (copy, nonatomic) NSString *authorUID;
@property (copy, nonatomic) NSString *itemId;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (nonatomic) long long shareWithTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)configDataWithMessage:(id)a0;
- (void).cxx_destruct;

@end
