@class FavoritesItemDataField, NSString, MultiMediaUploadTask, CMessageWrap;

@interface MultiMediaUploadBaseState : NSObject

@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) NSString *taskIdentifier;
@property (weak, nonatomic) MultiMediaUploadTask *context;
@property (retain, nonatomic) FavoritesItemDataField *dataField;

- (id)initWithContext:(id)a0;
- (void)start;
- (void)stop;
- (id)getStateName;
- (void).cxx_destruct;

@end
