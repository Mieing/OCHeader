@class UIColor, NSString, UIView;

@interface IESIMAlbumListCustomCellConfig : NSObject <IESIMAlbumListCustomCellConfigInterface>

@property (nonatomic) BOOL available;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) id /* block */ clickAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
