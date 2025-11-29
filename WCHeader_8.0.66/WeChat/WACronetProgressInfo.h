@class NSString;

@interface WACronetProgressInfo : NSObject

@property (retain, nonatomic) NSString *m_nsClientMsgID;
@property (nonatomic) unsigned long long m_nTotalLength;
@property (nonatomic) unsigned long long m_nFinishedLegth;

- (id)initWithClientMediaID:(id)a0 totalLength:(unsigned long long)a1 finishLength:(unsigned long long)a2;
- (void).cxx_destruct;

@end
