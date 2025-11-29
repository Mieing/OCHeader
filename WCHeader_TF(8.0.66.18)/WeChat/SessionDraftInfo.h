@class NSString;

@interface SessionDraftInfo : NSObject

@property (retain, nonatomic) NSString *draftContent;
@property (nonatomic) long long referMsgSvrId;
@property (retain, nonatomic) NSString *referPartXML;
@property (nonatomic) unsigned int draftStatus;

- (BOOL)hasDraftContent;
- (void)updateFromMMKV;
- (void).cxx_destruct;

@end
