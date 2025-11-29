@class CAKAlbumListCustomCellConfig;

@interface ACCNativeAlbumInputConfig : NSObject

@property (nonatomic) BOOL scrollToBottom;
@property (nonatomic) long long columnNumber;
@property (retain, nonatomic) CAKAlbumListCustomCellConfig *photoTabCustomCellConfig;
@property (copy, nonatomic) id /* block */ trackCellShowEvent;

- (void).cxx_destruct;

@end
