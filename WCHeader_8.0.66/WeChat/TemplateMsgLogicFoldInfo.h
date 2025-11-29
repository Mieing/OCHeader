@class NSArray, NSString, CMessageWrap;

@interface TemplateMsgLogicFoldInfo : NSObject

@property (retain, nonatomic) NSArray *foldMsgLocalIds;
@property (retain, nonatomic) NSArray *foldMsgCreatimes;
@property (retain, nonatomic) NSArray *foldMsgTitles;
@property (retain, nonatomic) NSArray *foldMsgUniqueIds;
@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (copy, nonatomic) NSString *clusterId;

- (void).cxx_destruct;

@end
