@class NSString, NSMutableArray;

@interface KindaText : NSObject <MMKText>

@property (retain, nonatomic) NSMutableArray *m_textArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)textArray;
- (void)appendText:(id)a0;
- (void)appendLink:(id)a0;
- (void).cxx_destruct;

@end
