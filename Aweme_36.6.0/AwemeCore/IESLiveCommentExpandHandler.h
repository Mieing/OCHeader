@class NSString;

@interface IESLiveCommentExpandHandler : NSObject <IESLiveCommentExpandHandlerProtocol>

@property (copy, nonatomic) id /* block */ willInsertText;
@property (copy, nonatomic) id /* block */ insertText;
@property (copy, nonatomic) id /* block */ replaceAllText;
@property (copy, nonatomic) id /* block */ hideMentionList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
