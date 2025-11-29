@class FavoritesItemDataField, CMessageWrap;

@interface RecordUploadTaskArgs : NSObject

@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) FavoritesItemDataField *recordData;
@property (nonatomic) BOOL isThumb;
@property (nonatomic) BOOL isMiddleData;
@property (nonatomic) BOOL isLivePhotoData;
@property (nonatomic) BOOL isLocalResource;
@property (nonatomic) BOOL isFromFav;

- (id)initWithRecordMsg:(id)a0 recordData:(id)a1;
- (void).cxx_destruct;

@end
