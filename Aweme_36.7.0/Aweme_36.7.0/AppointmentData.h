@class NSString, NSMutableArray;

@interface AppointmentData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *appointmentListArray;
@property (readonly, nonatomic) unsigned long long appointmentListArray_Count;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
