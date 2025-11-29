@class NSString, NSArray, NSNumber;
@protocol BDSimVideoBSModel;

@interface BDSimURLModifierContext : NSObject

@property (nonatomic) unsigned long long action;
@property (retain, nonatomic) NSString *URI;
@property (retain, nonatomic) NSArray *urlArray;
@property (retain, nonatomic) NSString *urlKey;
@property (retain, nonatomic) NSString *fileCs;
@property (retain, nonatomic) id<BDSimVideoBSModel> bsModel;
@property (nonatomic) BOOL isCDNURLExpired;
@property (retain, nonatomic) NSNumber *calcBitrate;
@property (nonatomic) BOOL isFromCache;
@property (retain, nonatomic) NSNumber *isFromCacheError;
@property (copy, nonatomic) NSString *isFromCacheErrorReason;

- (void).cxx_destruct;

@end
