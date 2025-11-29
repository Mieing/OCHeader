@class NSString, NSArray, BDSimURLObject, NSNumber;

@interface BDSimVideoBuilder : NSObject

@property (nonatomic) BOOL needSetToken;
@property (copy, nonatomic) NSString *videomodel;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *meta;
@property (retain, nonatomic) BDSimURLObject *playURL;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *realDuration;
@property (retain, nonatomic) NSNumber *lVideoRealDuration;
@property (nonatomic) long long cdnURLExpiredTime;
@property (copy, nonatomic) id /* block */ CDNURLExpiredHanlder;
@property (retain, nonatomic) NSNumber *isH265;
@property (copy, nonatomic) NSArray *bitrateModels;
@property (copy, nonatomic) NSArray *audioBitrateModels;
@property (nonatomic) long long isSourceHDR;

- (void).cxx_destruct;
- (id)build;

@end
