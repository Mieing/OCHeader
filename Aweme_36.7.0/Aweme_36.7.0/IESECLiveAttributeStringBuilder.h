@class NSString, NSAttributedString;

@interface IESECLiveAttributeStringBuilder : NSObject <IESECLiveAttributeStringBuilder>

@property (copy, nonatomic) id /* block */ builderBlock;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)build;

@end
