@class NSString, NSDictionary;
@protocol AFDMomentFeedDataControllerProtocol;

@interface AFDMomentDetailConfig : NSObject <NSCopying, AFDMomentDetailConfigInterface>

@property (retain, nonatomic) id<AFDMomentFeedDataControllerProtocol> dataController;
@property (nonatomic) unsigned long long detailType;
@property (nonatomic) BOOL landingToFeed;
@property (copy, nonatomic) NSString *landingItemID;
@property (nonatomic) unsigned long long hierarchy;
@property (copy, nonatomic) id /* block */ viewHasLoadedCallback;
@property (copy, nonatomic) NSDictionary *contextDict;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
