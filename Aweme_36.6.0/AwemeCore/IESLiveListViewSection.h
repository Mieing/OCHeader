@class NSArray, NSString, UIColor;

@interface IESLiveListViewSection : NSObject <IESLiveSectionProtocol>

@property (copy, nonatomic) NSArray *itemArray;
@property (retain, nonatomic) Class classForHeader;
@property (nonatomic) double heightForHeader;
@property (copy, nonatomic) NSString *headerString;
@property (retain, nonatomic) Class classForFooter;
@property (nonatomic) double heightForFooter;
@property (copy, nonatomic) NSString *footerString;
@property (retain, nonatomic) UIColor *headerColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
