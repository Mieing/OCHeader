@class NSString, NSMutableArray;

@interface AWEIMFansGroupWelcomeSection : NSObject <AWEIMBaseCollectionViewSessionProtocol>

@property (retain) NSMutableArray *viewModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mapCellClassToViewModel;
- (void).cxx_destruct;

@end
