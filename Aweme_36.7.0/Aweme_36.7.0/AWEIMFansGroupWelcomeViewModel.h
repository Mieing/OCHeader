@class NSString, AWEIMFansGroupWelcomeModel;

@interface AWEIMFansGroupWelcomeViewModel : NSObject <AWEIMBaseCollectionViewViewModelProtocol>

@property (nonatomic) long long editType;
@property (retain, nonatomic) AWEIMFansGroupWelcomeModel *model;
@property (nonatomic) BOOL enableNewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)cellHeight;

@end
