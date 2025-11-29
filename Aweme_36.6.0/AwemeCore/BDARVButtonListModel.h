@class NSString, BDARVButtonModel;

@interface BDARVButtonListModel : BDARVActionModel <BDARVJSONModel>

@property (retain, nonatomic) BDARVButtonModel *web;
@property (retain, nonatomic) BDARVButtonModel *app;
@property (retain, nonatomic) BDARVButtonModel *form;
@property (retain, nonatomic) BDARVButtonModel *counsel;
@property (retain, nonatomic) BDARVButtonModel *phone;
@property (retain, nonatomic) BDARVButtonModel *open;
@property (retain, nonatomic) BDARVButtonModel *dislike;
@property (retain, nonatomic) BDARVButtonModel *coupon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
