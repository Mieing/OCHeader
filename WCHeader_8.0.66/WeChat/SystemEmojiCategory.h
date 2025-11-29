@class NSString, NSArray;

@interface SystemEmojiCategory : NSObject <YYModel>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *emoji;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
