@interface AppStandardTextContentImageThumbConfig : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long videoDurationInSeconds;

- (id)init;

@end
