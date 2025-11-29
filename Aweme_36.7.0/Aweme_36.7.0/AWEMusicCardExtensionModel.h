@class NSString, NSArray;

@interface AWEMusicCardExtensionModel : NSObject <NSCopying>

@property (retain, nonatomic) NSString *activitySubtitle;
@property (retain, nonatomic) NSString *defaultSubtitle;
@property (retain, nonatomic) NSArray *lightIcon;
@property (retain, nonatomic) NSArray *darkIcon;
@property (retain, nonatomic) NSString *secId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
