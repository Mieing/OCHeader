@class NSString;

@interface AWETabCeilingToastModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long toastType;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *toastText;
@property (copy, nonatomic) NSString *jumpUrlTitle;
@property (copy, nonatomic) NSString *jumpUrl;
@property (nonatomic) long long limitID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
