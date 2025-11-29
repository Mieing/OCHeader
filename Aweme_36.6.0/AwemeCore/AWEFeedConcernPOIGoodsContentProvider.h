@class UIView;
@protocol AWEFeedConcernPOIGoodsCardProtocol;

@interface AWEFeedConcernPOIGoodsContentProvider : NSObject

@property (retain, nonatomic) UIView<AWEFeedConcernPOIGoodsCardProtocol> *contentView;
@property (copy, nonatomic) id /* block */ createdBlock;

- (id)createConcernPOIGoodsCardFromModel:(id)a0;
- (void).cxx_destruct;

@end
