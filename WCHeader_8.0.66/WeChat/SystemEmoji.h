@class NSString, NSArray;

@interface SystemEmoji : NSObject <YYModel>

@property (retain, nonatomic) NSString *emojiString;
@property (retain, nonatomic) NSArray *variations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
