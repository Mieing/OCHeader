@interface Base64Helper : NSObject

+ (id)encode_str_to_str:(id)a0;
+ (id)encode_data_to_str:(id)a0;
+ (id)encode_str_to_data:(id)a0;
+ (id)encode_data_to_data:(id)a0;
+ (id)decode_str_to_str:(id)a0;
+ (id)decode_data_to_str:(id)a0;
+ (id)decode_str_to_data:(id)a0;
+ (id)decode_data_to_data:(id)a0;
+ (BOOL)isValidedBase64EncodedChar:(unsigned short)a0;
+ (BOOL)isValidedBase64EncodedData:(id)a0;

@end
