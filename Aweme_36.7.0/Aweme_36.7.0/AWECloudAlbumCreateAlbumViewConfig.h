@class NSString;

@interface AWECloudAlbumCreateAlbumViewConfig : NSObject

@property (copy, nonatomic) NSString *albumPanelTitle;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSString *albumPlaceHolder;
@property (copy, nonatomic) NSString *btnTitle;
@property (nonatomic) long long albumNameLength;
@property (nonatomic) BOOL needShowBtnImage;
@property (copy, nonatomic) id /* block */ btnClicked;
@property (copy, nonatomic) id /* block */ getImageAsynBlock;
@property (copy, nonatomic) id /* block */ asynSetImageForView;

- (void).cxx_destruct;
- (id)init;

@end
