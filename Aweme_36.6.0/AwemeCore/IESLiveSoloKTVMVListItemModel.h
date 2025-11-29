@class NSString;

@interface IESLiveSoloKTVMVListItemModel : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *coverURL;
@property (retain, nonatomic) NSString *vid;
@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) NSString *videoURL;
@property (nonatomic) BOOL hasVideoCache;
@property (nonatomic) BOOL isSelected;

- (id)initWithMV:(id)a0 dir:(id)a1 needTitle:(BOOL)a2;
- (void).cxx_destruct;

@end
