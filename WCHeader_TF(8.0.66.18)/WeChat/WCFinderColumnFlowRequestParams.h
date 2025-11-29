@class NSData, NSString, FinderClientStatus;

@interface WCFinderColumnFlowRequestParams : NSObject

@property (copy, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) NSString *feedId;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) int pullType;
@property (nonatomic) int displayTabType;
@property (retain, nonatomic) FinderClientStatus *clientStatus;
@property (nonatomic) unsigned long long columnId;
@property (copy, nonatomic) NSString *columnBuffer;
@property (copy, nonatomic) NSData *rootLastBuffer;
@property (nonatomic) int commentScene;

- (void).cxx_destruct;

@end
