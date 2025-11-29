@class NSString, NSArray, AWEAwemeModel;
@protocol AWEWebImageTransformProtocol;

@interface AWEDCFeedImageLoadTask : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSArray *urlList;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *cacheName;
@property (copy, nonatomic) NSString *bizTag;
@property (retain, nonatomic) id<AWEWebImageTransformProtocol> transformer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) id /* block */ customLoadTask;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (id)identifierWithAweme:(id)a0 style:(id)a1;

- (void).cxx_destruct;

@end
