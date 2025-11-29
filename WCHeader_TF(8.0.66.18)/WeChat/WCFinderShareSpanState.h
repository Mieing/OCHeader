@class NSString, WCFinderGeneralJumpErrMsgModel;

@interface WCFinderShareSpanState : NSObject

@property (retain, nonatomic) NSString *spanModelStr;
@property (retain, nonatomic) WCFinderGeneralJumpErrMsgModel *spanModel;
@property (retain, nonatomic) NSString *notFoundState;

- (BOOL)valid;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualTo:(id)a0;
- (void).cxx_destruct;

@end
