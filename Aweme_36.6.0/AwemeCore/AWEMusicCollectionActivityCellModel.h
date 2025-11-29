@class NSString;

@interface AWEMusicCollectionActivityCellModel : NSObject <AWEMusicCollectionCellViewModelProtocol>

@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSString *routerUrl;
@property (nonatomic) BOOL shouldShowHighlightAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)cellHieght;
- (id)cellForTableView:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;

@end
