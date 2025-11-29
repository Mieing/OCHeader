@class NSArray, NSString, NSDictionary, AWEUserModel, AFDUserWorkCollectionView;

@interface AFDUserWorkSocialItemContext : NSObject

@property (nonatomic) BOOL enableSmartCrop;
@property (weak, nonatomic) AFDUserWorkCollectionView *collectionView;
@property (retain, nonatomic) AWEUserModel *author;
@property (copy, nonatomic) NSArray *itemList;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) unsigned long long pageScene;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) id /* block */ didEnterAwemeDetailBlock;
@property (nonatomic) BOOL disableLoadmore;

- (void).cxx_destruct;

@end
