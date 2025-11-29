@class NSString, NSDictionary, AWEAwemeModel;

@interface AWESpecialCardCancelSubscribeSheetConfig : NSObject <NSCopying>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ keepSubscribeSelection;
@property (copy, nonatomic) id /* block */ cancelSubscribeSelection;
@property (copy, nonatomic) id /* block */ maskAreaClicked;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
