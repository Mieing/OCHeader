@class NSString, FinderPaidCollectionInfo;

@interface WCFinderPaidCollectionDetailVCParams : NSObject

@property (nonatomic) BOOL halfScreen;
@property (retain, nonatomic) FinderPaidCollectionInfo *paidCollectionInfo;
@property (copy, nonatomic) NSString *sourceFeedID;
@property (copy, nonatomic) NSString *authorFinderUsername;
@property (nonatomic) int commentScene;
@property (nonatomic) BOOL autoStartPurchase;
@property (nonatomic) BOOL authorScene;
@property (nonatomic) BOOL feedItemAuthorScene;

+ (id)defaultParams;

- (void).cxx_destruct;

@end
