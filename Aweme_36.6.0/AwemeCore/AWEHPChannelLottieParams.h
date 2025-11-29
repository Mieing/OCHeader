@class NSString;

@interface AWEHPChannelLottieParams : MTLModel <NSCopying, MTLJSONSerializing>

@property (nonatomic) long long sessionID;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (retain, nonatomic) NSString *unselectedDarkURL;
@property (retain, nonatomic) NSString *unselectedLightURL;
@property (retain, nonatomic) NSString *selectedDarkURL;
@property (retain, nonatomic) NSString *selectedLightURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isValidWithError:(id *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
