@class NSString;

@interface AWEGDPointMarqueeItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *avatar;
@property (nonatomic) long long click_type;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *duration_text;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
