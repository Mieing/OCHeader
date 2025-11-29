@class NSString;

@interface IntelligentMsgImgResultButton : MMUIButton

@property (nonatomic) BOOL m_isChosen;
@property (retain, nonatomic) NSString *m_labelName;
@property (nonatomic) unsigned int m_searchType;

- (id)init;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;

@end
