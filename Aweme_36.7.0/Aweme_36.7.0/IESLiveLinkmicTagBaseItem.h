@class NSString;
@protocol IESLiveLinkmicTagCombined;

@interface IESLiveLinkmicTagBaseItem : NSObject <IESLiveLinkmicTagBaseItem>

@property (retain, nonatomic) id<IESLiveLinkmicTagCombined> tagCombined;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTagValid;
- (id)buildTagUI;
- (void).cxx_destruct;

@end
