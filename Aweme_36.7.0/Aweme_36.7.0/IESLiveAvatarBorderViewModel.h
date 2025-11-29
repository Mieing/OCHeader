@class NSString, HTSLiveImage, UIView;
@protocol IESLiveAvatarBorderContainer;

@interface IESLiveAvatarBorderViewModel : NSObject <IESLiveAvatarBorderItem>

@property (nonatomic) BOOL sizeAvailable;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (retain, nonatomic) HTSLiveImage *thumbIcon;
@property (copy, nonatomic) NSString *dressID;
@property (nonatomic) BOOL useThumb;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (weak, nonatomic) UIView<IESLiveAvatarBorderContainer> *borderContainer;
@property (nonatomic) unsigned long long source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDataWithBorder:(id)a0;
- (void)refreshBorderContainer;
- (void)p_updateBorderURLs;
- (id)d_callSymbolFromSymbols:(id)a0;
- (void)ts_borderDressEntranceErrorWithBorderURLs:(id)a0 useThumb:(BOOL)a1 symbol:(id)a2;
- (void).cxx_destruct;

@end
