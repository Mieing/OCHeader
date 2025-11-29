@class NSString, WCPlayerHttpMediaWrap;

@interface WCPlayerHttpMediaDownloadInfo : NSObject

@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL bTaskStart;
@property (nonatomic) long long createTime;
@property (nonatomic) unsigned long long moovoffset;
@property (nonatomic) unsigned long long moovlength;
@property (nonatomic) float duration;
@property (retain, nonatomic) NSString *nsIdentifier;
@property (retain, nonatomic) WCPlayerHttpMediaWrap *mediaWrap;

- (id)initWithMediaWrap:(id)a0;
- (BOOL)isSameMediaWrap:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
