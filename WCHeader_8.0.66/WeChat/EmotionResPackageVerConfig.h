@class NSString;

@interface EmotionResPackageVerConfig : NSObject <YYModel>

@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int matchVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)config:(id)a0 type:(unsigned int)a1;


@end
