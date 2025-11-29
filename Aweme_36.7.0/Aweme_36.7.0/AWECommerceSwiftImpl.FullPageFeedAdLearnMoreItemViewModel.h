@class NSString;
@protocol AWECommerceFullPageFeedAdLearnMoreItemModelProtocol;

@interface AWECommerceSwiftImpl.FullPageFeedAdLearnMoreItemViewModel : AWEKnowledgeSwiftBasic.FullPageBaseItemViewModel <AWECommerceFullPageFeedAdLearnMoreItemViewModelProtocol> {
    void /* function */ itemType;
}

@property (nonatomic, retain) id<AWECommerceFullPageFeedAdLearnMoreItemModelProtocol> adLearnMoreItemModel;
@property (nonatomic, copy) NSString *itemType;
@property (nonatomic) double beginShowTime;
@property (nonatomic, readonly) double itemHeight;

- (void).cxx_destruct;

@end
