@class NSString, NSAttributedString;

@interface IESLiveScreencastMsgPushMessageModel : NSObject <IESLiveUpdatableListItem>

@property (copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) id /* block */ itemUpdateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)identifier;

@end
