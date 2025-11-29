@class NSString;

@interface AWEHPLottiePlayParams : MTLModel <MTLJSONSerializing, NSCopying>

@property (nonatomic) long long repeatCount;
@property (nonatomic) long long exitMode;
@property (nonatomic) long long exitMinDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;
- (BOOL)isValidWithError:(id *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
