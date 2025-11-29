@class NSArray;

@interface WNSearchResultInfo : NSObject

@property (nonatomic) unsigned long long location;
@property (nonatomic) BOOL isFromDesc;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *subSearchResultInfos;

- (void).cxx_destruct;

@end
