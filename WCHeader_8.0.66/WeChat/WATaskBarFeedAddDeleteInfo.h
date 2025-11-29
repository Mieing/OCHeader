@class NSString;

@interface WATaskBarFeedAddDeleteInfo : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) unsigned long long actionChannel;
@property (nonatomic) unsigned long long contentType;
@property (retain, nonatomic) NSString *contentId;
@property (nonatomic) unsigned long long liveDuration;
@property (nonatomic) unsigned long long page;
@property (nonatomic) unsigned long long indexFrom;
@property (nonatomic) unsigned long long indexTo;
@property (retain, nonatomic) NSString *userName;

- (void).cxx_destruct;

@end
