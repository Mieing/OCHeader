@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface TingMusicBottomSheetUtils : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)showAlbumPageFromMusicItemWithCompletion:(id /* block */)a0;
- (void)minimizeWithCompletion:(id /* block */)a0;
- (void)dislikeWithCompletion:(id /* block */)a0;
- (void)complaintWithCompletion:(id /* block */)a0;
- (void)editAlbumWithCompletion:(id /* block */)a0;
- (void)deleteAlbumWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
