@class NSString, UIImage;

@interface ACCMusicItemContextMenuItem : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *title;

+ (id)menuItemWithId:(id)a0 icon:(id)a1 title:(id)a2;

- (void).cxx_destruct;

@end
