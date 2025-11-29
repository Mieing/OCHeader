@class NSString;

@interface AWEUserRecommendPlaceholderCellModel : NSObject <AWEUserRecommendCellModelProtocol>

@property (nonatomic) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)aweur_cellType;

@end
