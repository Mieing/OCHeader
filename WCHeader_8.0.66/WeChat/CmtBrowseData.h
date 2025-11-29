@class NSString;

@interface CmtBrowseData : NSObject

@property (retain, nonatomic) NSString *feedID;
@property (retain, nonatomic) NSString *cmtID;
@property (nonatomic) long long expCnt;
@property (nonatomic) long long clkCnt;
@property (nonatomic) long long cmtType;
@property (nonatomic) long long clkEmoCnt;
@property (nonatomic) long long clkPicCnt;
@property (nonatomic) long long cmtTextLength;

- (id)init;
- (void).cxx_destruct;

@end
