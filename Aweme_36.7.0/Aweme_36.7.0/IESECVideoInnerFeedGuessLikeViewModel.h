@class NSString;

@interface IESECVideoInnerFeedGuessLikeViewModel : NSObject <IESECContentListCellViewModelProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })cellContentSize;
- (id)configureCellWithTableView:(id)a0;
- (unsigned long long)cellType;

@end
