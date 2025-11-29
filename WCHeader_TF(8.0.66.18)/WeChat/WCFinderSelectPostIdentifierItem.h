@class NSString, PrepareFinder, WCFinderContact;

@interface WCFinderSelectPostIdentifierItem : NSObject

@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) BOOL selected;
@property (retain, nonatomic) PrepareFinder *prepare;
@property (copy, nonatomic) NSString *relatedUsername;
@property (nonatomic) BOOL hidenMentionView;

- (id)checkLabelText;
- (void).cxx_destruct;

@end
