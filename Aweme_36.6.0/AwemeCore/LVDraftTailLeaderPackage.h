@class NSString;

@interface LVDraftTailLeaderPackage : NSObject <LVCopying>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hiddenContent;
@property (copy, nonatomic) NSString *accountID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
